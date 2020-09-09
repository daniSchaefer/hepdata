#!/usr/bin/env python
#-*- coding:utf-8 -*-
import os

from hepdata_lib import *
import numpy as np
import ROOT
import time


# attention: the uncertainty methon from hep calculates the uncertainties itself and needs list with nominal values, list with up/down values as input!


def readGraph(infile,graphname):
    f = open(infile,"r")
    r=[]
    start=0
    for line in f.readlines():
        if '#' in line: continue
        if (graphname in line) and ("{" in line):
            start=1
            continue
        if "}" in line:
            if start==1: r.append(float(line.split("}")[0]) )
            start=0
        if start==1:
            r.append(float(line.split(",")[0]) )
    return r
  
def getErrors(down,up,nominal):
    i=0
    errup =[]
    errdown=[]
    for n in nominal:
        errdown.append(down[i]-n)
        errup.append(up[i]-n)
        print str(n) + " +- "+ str(errup[-1])+" "+str(errdown[-1])
        i+=1
    return errdown,errup
         
def makeDict(x,y):
    d ={}
    ati=0
    for i in x:
        d[i]=[]
    for i in range(0,len(x)):    
        d[x[i]].append(y[i])
    return d
        
def makeLists(dic):
    up=[]
    down=[]
    keys = sorted(dic.keys())
    for k in keys:
        for i in range(0,len(dic[k])):
            if i ==0:
                up.append(dic[k][0])
            if i ==1:
                down.append(dic[k][1])
    return up,down,keys
            

def make_table_brazillian_flag(infile,title,description,title_theo,description_theo, page):
    # get 2 sigma uncertainty on limit
    rx = readGraph(infile,"Graph0_fx1")
    ry = readGraph(infile,"Graph0_fy1")
    d1 = makeDict(rx,ry)
    predown,preup,x = makeLists(d1)
    
    # get 1 sigma uncertainty on limit
    rx1 = readGraph(infile,"Graph1_fx2")
    ry1 = readGraph(infile,"Graph1_fy2")
    d11 = makeDict(rx1,ry1)
    predown1,preup1,x1 = makeLists(d11)
    
    
    # get expected limit
    exp = readGraph(infile,"Graph2_fy1001")
    
    
    # get observed limit
    obs = readGraph(infile,"Graph3_fy1002")
    
    
    
    mjj = Variable("dijet invariant mass", is_independent=True,is_binned=False,units="TeV")
    mjj.values = x
    exp_2sd  = Variable("Expected #pm 2 std. deviation", is_independent=False,is_binned=False,units="pb")
    exp_2sd.values = exp
    unc2 = Uncertainty("2 s.d.")
    unc2.is_symmetric = False
    unc2.set_values(zip(predown , preup), nominal=exp_2sd.values)
    exp_2sd.uncertainties.append(unc2)
    
    exp_1sd  = Variable("Expected #pm 1 std. deviation", is_independent=False,is_binned=False,units="pb")
    exp_1sd.values = exp
    unc1 = Uncertainty("1 s.d.")
    unc1.is_symmetric = False
    unc1.set_values(zip(predown1 , preup1), nominal=exp_1sd.values)
    exp_1sd.uncertainties.append(unc1)
    
    
    expL = Variable("expected limit", is_independent=False,is_binned=False,units="pb")
    expL.values = exp
    obsL = Variable("observed limit", is_independent=False,is_binned=False,units="pb")
    obsL.values = obs
    
    table = Table(title)
    table.location = page
    table.keywords["observables"] = ["GQ"]
    table.description = description

    table.add_variable(mjj)
    #table.add_variable(expL)
    table.add_variable(obsL)
    #table.add_variable(exp_1sd)
    table.add_variable(exp_2sd)
    table.add_variable(exp_1sd)
    
    
     # get theory curve with uncertainties
    xtheo = readGraph(infile,"grshade_fx3")
    theo = readGraph(infile,"gtheory_fy1003")
    theoerr = readGraph(infile,"grshade_fy3")
    t_dic = makeDict(xtheo,theoerr)
    #print t_dic
    tup,tdown,xt = makeLists(t_dic)
    #print theo
    #td,tu = getErrors(tdown,tup,theo)
    #print td
    #rint tu
    
    mtheo = Variable("dijet invariant mass theo",is_independent=True,is_binned=False,units="TeV")
    mtheo.values = xt
    xsTheo = Variable("cross section from theory",is_independent=False,is_binned=False,units="pb")
    xsTheo.values = theo
    unct = Uncertainty("1 s.d.")
    unct.is_symmetric = False
    unct.set_values(zip(tdown,tup), nominal=xsTheo.values)
    xsTheo.uncertainties.append(unct)
    
    print xt
    print theo
    
    table_theo = Table(title_theo)
    table_theo.location = page
    table_theo.keywords["observables"] = ["SIG/DPT"]
    table_theo.description = description_theo
    table_theo.add_variable(mtheo)
    table_theo.add_variable(xsTheo)
    return table,table_theo
    
def make_table_brazillian_flag2(infile,title,description, page):
    # get 2 sigma uncertainty on limit
    rx = readGraph(infile,"Graph0_fx1")
    ry = readGraph(infile,"Graph0_fy1")
    d1 = makeDict(rx,ry)
    predown,preup,x = makeLists(d1)
    
    # get 1 sigma uncertainty on limit
    rx1 = readGraph(infile,"Graph1_fx2")
    ry1 = readGraph(infile,"Graph1_fy2")
    d11 = makeDict(rx1,ry1)
    predown1,preup1,x1 = makeLists(d11)
    
    
    # get expected limit
    exp = readGraph(infile,"Graph2_fy1001")
    
    
    # get observed limit
    obs = readGraph(infile,"Graph3_fy1002")
    
    
    
    mjj = Variable("dijet invariant mass", is_independent=True,is_binned=False,units="TeV")
    mjj.values = x
    exp_2sd  = Variable("Expected #pm 2 std. deviation", is_independent=False,is_binned=False,units="1")
    exp_2sd.values = exp
    unc2 = Uncertainty("2 s.d.")
    unc2.is_symmetric = False
    unc2.set_values(zip(predown , preup), nominal=exp_2sd.values)
    exp_2sd.uncertainties.append(unc2)
    
    exp_1sd  = Variable("Expected #pm 1 std. deviation", is_independent=False,is_binned=False,units="1")
    exp_1sd.values = exp
    unc1 = Uncertainty("1 s.d.")
    unc1.is_symmetric = False
    unc1.set_values(zip(predown1 , preup1), nominal=exp_1sd.values)
    exp_1sd.uncertainties.append(unc1)
    
    
    expL = Variable("expected limit", is_independent=False,is_binned=False,units="1")
    expL.values = exp
    obsL = Variable("observed limit", is_independent=False,is_binned=False,units="1")
    obsL.values = obs
    
    table = Table(title)
    table.location = page
    table.keywords["observables"] = ["GQ"]
    table.description = description

    table.add_variable(mjj)
    table.add_variable(obsL)
    table.add_variable(exp_2sd)
    table.add_variable(exp_1sd)
    
    return table


def addLists(x1,x2):
    r =[]
    for i in range(0,len(x2)):
        if i==0:
            continue
        r.append(x2[-i])
    n=0
    for x in x1:
        if n == 0:
            n+=1
            continue
        r.append(x)
        n+=1
    return r
 
def reduceToRange(rmin,rmax, r):
    res=[]
    for x in r:
        if x<rmin:
            continue
        if x > rmax:
            continue
        res.append(x)
    return res
 
def makeNewGraph(graph_y,graph_x,x): 
    g= ROOT.TGraph()
    for i in range(0,len(graph_x)):
        g.SetPoint(i,graph_x[i],graph_y[i])
    res =[]
    for v in x:
        res.append(g.Eval(v))
        
    #c= ROOT.TCanvas("c","c",400,400)
    #g.Draw("AL")
    #time.sleep(10)
    return res
 
 
 
def make_table_coupling_plane(infile,title,description, page):
    
    
    ################## get line for mass 1.5 TeV ################
    
    # get graph I
    xg_1 = readGraph(infile,"gr0_M1500_fx5")
    yM1500_1 = readGraph(infile,"gr0_M1500_fy5")
    
    # get graph I
    xg_2 = readGraph(infile,"gr1_M1500_fx6")
    yM1500_2 = readGraph(infile,"gr1_M1500_fy6")
    
    yM1500_3 = readGraph(infile,"gr2_M1500_fy7")
    yM1500_4 = readGraph(infile,"gr3_M1500_fy8")
    
    xg_unred = addLists(xg_1,xg_2)
    xg = reduceToRange(-3.7,3.7, xg_unred)
    
    
    
    yM1500_1 = addLists(yM1500_1,yM1500_2)
    yM1500_2 = addLists(yM1500_3,yM1500_4)
    
    yM1500_1 = makeNewGraph(yM1500_1,xg_unred,xg)
    yM1500_2 = makeNewGraph(yM1500_2,xg_unred,xg)
    
    
    gg = Variable("g_{V}c_{H}", is_independent=True,is_binned=False,units="1")
    gg.values = xg
    
    gM1500= Variable("g_{V}c_{H} M = 1500", is_independent=False,is_binned=False,units="1")
    gM1500.values = yM1500_1
    
    gM1500_2= Variable("g_{V}c_{H} M = 1500", is_independent=False,is_binned=False,units="1")
    gM1500_2.values = yM1500_2
    
    ############################################################################################################################

    
    ################## get line for mass 2.0 TeV ################
    
    # get graph I
    yM2000_1 = readGraph(infile,"gr0_M2000_fy9")
    yM2000_2 = readGraph(infile,"gr1_M2000_fy10")
    yM2000_3 = readGraph(infile,"gr2_M2000_fy11")
    yM2000_4 = readGraph(infile,"gr3_M2000_fy12")
    
    yM2000_1 = addLists(yM2000_1,yM2000_2)
    yM2000_2 = addLists(yM2000_3,yM2000_4)
   
    yM2000_1 = makeNewGraph(yM2000_1,xg_unred,xg)
    yM2000_2 = makeNewGraph(yM2000_2,xg_unred,xg)
    
    gM2000= Variable("g_{V}c_{H} M = 2000", is_independent=False,is_binned=False,units="1")
    gM2000.values = yM2000_1
    
    gM2000_2= Variable("g_{V}c_{H} M = 2000", is_independent=False,is_binned=False,units="1")
    gM2000_2.values = yM2000_2
    
    print len(yM2000_1)
    
    ############################################################################################################################

    ################## get line for mass 3.5 TeV ################
    
    # get graph I
    yM3500_1 = readGraph(infile,"gr0_M3500_fy13")
    yM3500_2 = readGraph(infile,"gr1_M3500_fy14")
    yM3500_3 = readGraph(infile,"gr2_M3500_fy15")
    yM3500_4 = readGraph(infile,"gr3_M3500_fy16")
    
        
    xg_3500_1 = readGraph(infile,"gr0_M3500_fx13")
    xg_3500_2 = readGraph(infile,"gr1_M3500_fx14")
    xg_3500 = addLists(xg_3500_1,xg_3500_2)
    
    yM3500_1 = addLists(yM3500_1,yM3500_2)
    yM3500_2 = addLists(yM3500_3,yM3500_4)
            
    yM3500_1 = makeNewGraph(yM3500_1,xg_3500,xg)
    yM3500_2 = makeNewGraph(yM3500_2,xg_3500,xg)
    
    gM3500= Variable("g_{V}c_{H} M = 3500", is_independent=False,is_binned=False,units="1")
    gM3500.values = yM3500_1
    
    gM3500_2= Variable("g_{V}c_{H} M = 3500", is_independent=False,is_binned=False,units="1")
    gM3500_2.values = yM3500_2
    
    ############################################################################################################################
   
   
    ################## get region where theoretical width is larger than the narrow width approximation ################
    
    # get graph I
    x1 = readGraph(infile,"Graph_fx1")
    y1 = readGraph(infile,"Graph_fy1")
            
    # get graph II
    x2 = readGraph(infile,"Graph_fx2")
    y2 = readGraph(infile,"Graph_fy2")
    
    x = addLists(x1,x2)
    y = addLists(y1,y2)
    
    
     # get graph III
    x3 = readGraph(infile,"Graph_fx3")
    y3 = readGraph(infile,"Graph_fy3")
            
    # get graph IV
    x4 = readGraph(infile,"Graph_fx4")
    y4 = readGraph(infile,"Graph_fy4")
    
    x_2 = addLists(x3,x4)
    y_2 = addLists(y3,y4)
    
    y = makeNewGraph(y,x,xg)
    y_2 = makeNewGraph(y_2,x,xg)
    
    
    g2= Variable("g^2c_{F}/g_{V} validity limit", is_independent=False,is_binned=False,units="1")
    g2.values = y
    
    g3= Variable("g^2c_{F}/g_{V} validity limit", is_independent=False,is_binned=False,units="1")
    g3.values = y_2
    
    ############################################################################################################################
        
    
    table = Table(title)
    table.location = page
    #table.keywords["observables"] = ["GQ"]
    table.description = description

    #table.add_variable(g)
    table.add_variable(gg)
    table.add_variable(gM1500)
    table.add_variable(gM1500_2)
    table.add_variable(gM2000)
    table.add_variable(gM2000_2)
    table.add_variable(gM3500)
    table.add_variable(gM3500_2)
    table.add_variable(g2)
    table.add_variable(g3)
    return table  



def main():
    # Write to this directory
    
    outdir = "./submission/"

    submission = Submission()
    submission.read_abstract("./input/abstract.txt")
    
    ###### Figure 6 limits for VV channel ##########################
    limit,theo = make_table_brazillian_flag("input/brazilianFlag_BulkZZ_VVnew_new_combined_13TeV.C","Cross section limits for a spin-2 resonance decaying to ZZ","95% CLs Limits on #sigma #times #bf{#it{#Beta}}(G_{Bulk} #rightarrow ZZ) (pb)","theory cross sections for a Bulk Graviton to ZZ model","theory cross sections for a G_{Bulk} #rightarrow ZZ (pb). Uncertainties include the PDF.","Data from Figure 6 (b) on page 14")
    
    BGWW,BGWWtheo = make_table_brazillian_flag("input/brazilianFlag_BulkWW_VVnew_new_combined_13TeV.C","Cross section limits for a spin-2 resonance decaying to WW","95% CLs Limits on #sigma #times #bf{#it{#Beta}}(G_{Bulk} #rightarrow WW) (pb)","theory cross sections for a Bulk Graviton to WW model","theory cross sections for a G_{Bulk} #rightarrow WW (pb). Uncertainties include the PDF.","Data from Figure 6 (a) on page 14")
    
    Zprime,Zprimetheo = make_table_brazillian_flag("input/brazilianFlag_ZprimeWW_VVnew_new_combined_13TeV.C","Cross section limits for a spin-1 resonance decaying to WW","95% CLs Limits on #sigma #times #bf{#it{#Beta}}(Z' #rightarrow WW) (pb)","theory cross sections for a Z' to WW model","theory cross sections for a Z' #rightarrow WW (pb). Uncertainties include the PDF.","Data from Figure 6 (a) on page 14")
    
    Wprime,Wprimetheo = make_table_brazillian_flag("input/brazilianFlag_WZ_VVnew_new_combined_13TeV.C","Cross section limits for a spin-1 resonance decaying to WZ","95% CLs Limits on #sigma #times #bf{#it{#Beta}}(W' #rightarrow WZ) (pb)","theory cross sections for a W' to WZ model","theory cross sections for a W' #rightarrow WZ (pb). Uncertainties include the PDF.","Data from Figure 6 (c) on page 14")
    
    HVT = make_table_brazillian_flag2("input/testHVT.C","limits for HVT triplet model B","95% CLs Limits on #sigma #times #bf{#it{#Beta}}(W'/Z' #rightarrow WZ/WW)/#sigma_{HVT model B theory}","Data from Figure 6 (d) on page 14")
    
    
    
    
    submission.add_table(limit)
    submission.add_table(theo)
    submission.add_table(BGWW)
    submission.add_table(BGWWtheo)
    submission.add_table(Zprimetheo)
    submission.add_table(Wprime)
    submission.add_table(Wprimetheo)
    submission.add_table(HVT)
    
    
    ################ end figure 6 ####################################
    
    coupl = make_table_coupling_plane("input/hvt-couplings.C","HVT coupling plane","Exclusion regions in the HVT coupling plane for three resonance masses", "Data from Figure 7 on page 15")
    submission.add_table(coupl)
    ################ for figure 8 in paper on page 15 ################
    
    qW,qWtheo = make_table_brazillian_flag("input/brazilianFlag_qW_qVnew_new_combined_13TeV.C","Cross section limits for a q* resonance decaying to qW","95% CLs Limits on #sigma #times #bf{#it{#Beta}}(q^{*} #rightarrow qW) (pb)","theory cross sections for a q* to qW model","theory cross sections for a q^{*} #rightarrow qW (pb). Uncertainties include the PDF.","Data from Figure 8 (a) on page 15")
    
    qZ,qZtheo = make_table_brazillian_flag("input/brazilianFlag_qZ_qVnew_new_combined_13TeV.C","Cross section limits for a q* resonance decaying to qZ","95% CLs Limits on #sigma #times #bf{#it{#Beta}}(q^{*} #rightarrow qZ) (pb)","theory cross sections for a q* to qZ model","theory cross sections for a q^{*} #rightarrow qZ (pb). Uncertainties include the PDF.","Data from Figure 8 (b) on page 15")
    
    submission.add_table(qW)
    submission.add_table(qWtheo)
    submission.add_table(qZ)
    submission.add_table(qZtheo)
    
    ################## end figure 8 #######################################
    
    
    for table in submission.tables:
       table.keywords["reactions"] = ["P P --> Jet Jet"]
       table.keywords["cmenergies"] = [13000]
    submission.create_files(outdir)


if __name__ == '__main__':
    main()

