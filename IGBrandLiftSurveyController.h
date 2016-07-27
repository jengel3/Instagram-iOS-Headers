
#import <Instagram/IGViewController.h>
#import <Instagram/IGBrandLiftQuestionViewDelegate.h>
#import <Instagram/IGBrandLiftThankYouViewDelegate.h>

@class IGBrandLiftSurvey, IGBrandLiftPrimerView, NSArray, IGBrandLiftThankYouView, NSString;

@interface IGBrandLiftSurveyController : IGViewController <IGBrandLiftQuestionViewDelegate, IGBrandLiftThankYouViewDelegate> {

	IGBrandLiftSurvey* _survey;
	IGBrandLiftPrimerView* _primerView;
	NSArray* _questionViews;
	int _currentQuestionIndex;
	IGBrandLiftThankYouView* _thankYouView;
	unsigned _currentViewType;

}

@property (nonatomic,retain) IGBrandLiftSurvey * survey;                          //@synthesize survey=_survey - In the implementation block
@property (nonatomic,retain) IGBrandLiftPrimerView * primerView;                  //@synthesize primerView=_primerView - In the implementation block
@property (nonatomic,retain) NSArray * questionViews;                             //@synthesize questionViews=_questionViews - In the implementation block
@property (assign,nonatomic) int currentQuestionIndex;                            //@synthesize currentQuestionIndex=_currentQuestionIndex - In the implementation block
@property (nonatomic,retain) IGBrandLiftThankYouView * thankYouView;              //@synthesize thankYouView=_thankYouView - In the implementation block
@property (assign,nonatomic) unsigned currentViewType;                            //@synthesize currentViewType=_currentViewType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)popoverWidth;
-(id)analyticsModule;
-(void)setQuestionViews:(NSArray *)arg1 ;
-(void)setCurrentQuestionIndex:(int)arg1 ;
-(void)setThankYouView:(IGBrandLiftThankYouView *)arg1 ;
-(IGBrandLiftThankYouView *)thankYouView;
-(void)primerViewDidTapNext;
-(IGBrandLiftPrimerView *)primerView;
-(void)showPrimerView;
-(void)showNextQuestionWithPreviousQuestionView:(id)arg1 ;
-(void)logUserSentimentSurveyWillAppear;
-(void)setCurrentViewType:(unsigned)arg1 ;
-(int)currentQuestionIndex;
-(NSArray *)questionViews;
-(IGBrandLiftSurvey *)survey;
-(void)logDismiss;
-(void)logPrimerViewResponse:(char)arg1 ;
-(void)logQuestion:(id)arg1 withAnswers:(id)arg2 ;
-(void)showResultsView;
-(unsigned)currentViewType;
-(void)questionView:(id)arg1 didSelectAnswers:(id)arg2 forQuestion:(id)arg3 ;
-(void)thankYouViewDidSelectDone:(id)arg1 ;
-(void)thankYouViewDidSelectShowResults:(id)arg1 ;
-(id)initWithSurvey:(id)arg1 ;
-(void)setSurvey:(IGBrandLiftSurvey *)arg1 ;
-(void)setPrimerView:(IGBrandLiftPrimerView *)arg1 ;
-(void)viewDidLoad;
-(void)dismissPopover;
@end

