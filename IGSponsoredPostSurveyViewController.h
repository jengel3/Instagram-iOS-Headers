
#import <Instagram/IGViewController.h>
#import <Instagram/IGSurveyQuestionControllerDelegate.h>

@class IGSurveyTextualEmotionController, IGFeedItem;

@interface IGSponsoredPostSurveyViewController : IGViewController <IGSurveyQuestionControllerDelegate> {

	/*^block*/id _completion;
	IGSurveyTextualEmotionController* _questionController;
	IGFeedItem* _feedItem;

}

@property (nonatomic,copy) id completion;                                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) IGSurveyTextualEmotionController * questionController;              //@synthesize questionController=_questionController - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                              //@synthesize feedItem=_feedItem - In the implementation block
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGSurveyTextualEmotionController *)questionController;
-(void)onHideTapped;
-(id)surveyQuestion;
-(void)dismissWithAnswer:(id)arg1 ;
-(void)surveyAnswerWasSelectedWith:(id)arg1 ;
-(void)setQuestionController:(IGSurveyTextualEmotionController *)arg1 ;
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)viewDidLoad;
@end

