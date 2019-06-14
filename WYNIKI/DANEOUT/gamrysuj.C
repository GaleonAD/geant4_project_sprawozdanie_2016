{
	gROOT->Reset(); 
	gROOT->ForceStyle(); 	 
	TCanvas *c = new TCanvas("c1","",900,600);
	c->SetFillColor(0);



	TFile *f = new TFile("gamma2T.root");
	TH1D *hist = (TH1D*)f->Get("EDFirst");  
//	TH1D *hist = (TH1D*)f->Get("EDSecond");  

        hist->SetTitle("Energy deposit in Scin layers for 1000 events");
        hist->SetMarkerStyle(1);
        hist->SetMarkerColor(2);
        hist->SetMarkerSize(0.75);
		hist->SetLineColor(kGreen); // Fill fill color to yellow
        hist->GetXaxis()->SetTitle("number of Scin layer");
        hist->GetYaxis()->SetTitle("Energy deposit [MeV]");
        hist->GetYaxis()->SetTitleOffset(1.4);
//        hist->SetMaximum(0.08);
        hist->SetStats(0);

	hist->Draw("hist same");


	TFile *f = new TFile("gammaa-1T.root");
	TH1D *hist = (TH1D*)f->Get("EDFirst");  
//	TH1D *hist = (TH1D*)f->Get("EDSecond");  

        hist->SetTitle("Energy deposit in Scin layers for 1000 events");
        hist->SetMarkerStyle(1);
        hist->SetMarkerColor(2);
        hist->SetMarkerSize(0.75);
		hist->SetLineColor(kBlack); // Fill fill color to yellow
        hist->GetXaxis()->SetTitle("number of Scin layer");
        hist->GetYaxis()->SetTitle("Energy deposit [MeV]");
        hist->GetYaxis()->SetTitleOffset(1.4);
//        hist->SetMaximum(0.08);
        hist->SetStats(0);

	hist->Draw("hist Same");
	TFile *f = new TFile("gamma-500G.root");
	TH1D *hist = (TH1D*)f->Get("EDFirst");  
//	TH1D *hist = (TH1D*)f->Get("EDSecond");  

        hist->SetTitle("Energy deposit in Scin layers for 1000 events");
        hist->SetMarkerStyle(1);
        hist->SetMarkerColor(2);
        hist->SetMarkerSize(0.75);
		hist->SetLineColor(kBlue); // Fill fill color to yellow
        hist->GetXaxis()->SetTitle("number of Scin layer");
        hist->GetYaxis()->SetTitle("Energy deposit [MeV]");
        hist->GetYaxis()->SetTitleOffset(1.4);
//        hist->SetMaximum(0.08);
        hist->SetStats(0);

	hist->Draw("hist Same");




	TFile *f = new TFile("gamma-100G.root");
	TH1D *hist = (TH1D*)f->Get("EDFirst");  
//	TH1D *hist = (TH1D*)f->Get("EDSecond");  

        hist->SetTitle("Energy deposit in Scin layers for 1000 events");
        hist->SetMarkerStyle(1);
        hist->SetMarkerColor(2);
        hist->SetMarkerSize(0.75);
		hist->SetLineColor(kRed); // Fill fill color to yellow
        hist->GetXaxis()->SetTitle("number of Scin layer");
        hist->GetYaxis()->SetTitle("Energy deposit [MeV]");
        hist->GetYaxis()->SetTitleOffset(1.4);
//        hist->SetMaximum(0.08);
        hist->SetStats(0);

	hist->Draw("hist same");

	c->SaveAs("compare.png");
}

