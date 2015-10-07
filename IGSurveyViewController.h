/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:11 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <Instagram/IGSurveryPrimerViewDelegate.h>
#import <Instagram/IGSurveyQuestionViewDelegate.h>

@class IGSurveyQuestion, IGSurveyPrimerView, IGSurveyQuestionView, IGSurveyResultView, NSString;

@interface IGSurveyViewController : IGViewController <IGSurveryPrimerViewDelegate, IGSurveyQuestionViewDelegate> {

	char _showingPrimerView;
	IGSurveyQuestion* _question;
	IGSurveyPrimerView* _primerView;
	IGSurveyQuestionView* _questionView;
	IGSurveyResultView* _resultView;

}

@property (nonatomic,retain) IGSurveyQuestion * question;                      //@synthesize question=_question - In the implementation block
@property (nonatomic,retain) IGSurveyPrimerView * primerView;                  //@synthesize primerView=_primerView - In the implementation block
@property (nonatomic,retain) IGSurveyQuestionView * questionView;              //@synthesize questionView=_questionView - In the implementation block
@property (nonatomic,retain) IGSurveyResultView * resultView;                  //@synthesize resultView=_resultView - In the implementation block
@property (assign,nonatomic) char showingPrimerView;                           //@synthesize showingPrimerView=_showingPrimerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)popoverWidth;
-(IGSurveyQuestion *)question;
-(void)setQuestion:(IGSurveyQuestion *)arg1 ;
-(IGSurveyPrimerView *)primerView;
-(void)setPrimerView:(IGSurveyPrimerView *)arg1 ;
-(id)initWithQuestion:(id)arg1 ;
-(void)primerViewDidTapNextInView:(id)arg1 ;
-(void)questionView:(id)arg1 didSelectAnswer:(id)arg2 ;
-(void)setShowingPrimerView:(char)arg1 ;
-(IGSurveyQuestionView *)questionView;
-(char)showingPrimerView;
-(void)notifySurveyPrimerViewDidDismissWithResponse:(char)arg1 ;
-(IGSurveyResultView *)resultView;
-(void)setQuestionView:(IGSurveyQuestionView *)arg1 ;
-(void)setResultView:(IGSurveyResultView *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)dismiss;
@end

