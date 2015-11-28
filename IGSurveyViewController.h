
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
-(void)setQuestionView:(IGSurveyQuestionView *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)dismiss;
-(IGSurveyResultView *)resultView;
-(void)setResultView:(IGSurveyResultView *)arg1 ;
@end

