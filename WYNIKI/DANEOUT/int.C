{
	gROOT->Reset(); 
	gROOT->ForceStyle(); 	 
	TCanvas *c = new TCanvas("c1","",900,600);
	c->SetFillColor(0);



	TFile *f = new TFile("pi0_1T.root");
	TH1D *histF = (TH1D*)f->Get("EDFirst");  
	TH1D *histS = (TH1D*)f->Get("EDSecond");  
		
	
	Double_t integral = 0;

	for( Int_t i = 0 ; i < 17; ++i){
	
	integral += histF->GetBinContent(i);

	}

	cout << "First" << integral << endl;

	integral = 0.0;

	for( Int_t i = 0 ; i < 17; ++i){
	
	integral += histS->GetBinContent(i);

	}

	cout << "Second: " << integral;
}

