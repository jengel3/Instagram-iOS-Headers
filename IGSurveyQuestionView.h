
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGSurveyQuestionControllerDelegate.h>

@protocol IGSurveyQuestionViewDelegate, IGSurveyQuestionController;
@class UIView, IGSurveyQuestion;

@interface IGSurveyQuestionView : UIView <IGSurveyQuestionControllerDelegate> {

	id<IGSurveyQuestionViewDelegate> _delegate;
	UIView* _headerView;
	id<IGSurveyQuestionController> _questionController;
	IGSurveyQuestion* _question;

}

@property (nonatomic,retain) UIView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) id<IGSurveyQuestionController> questionController;              //@synthesize questionController=_questionController - In the implementation block
@property (nonatomic,retain) IGSurveyQuestion * question;                                    //@synthesize question=_question - In the implementation block
@property (assign,nonatomic,__weak) id<IGSurveyQuestionViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<IGSurveyQuestionController>)questionController;
-(void)setQuestion:(IGSurveyQuestion *)arg1 ;
-(void)surveyAnswerWasSelectedWith:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 question:(id)arg2 ;
-(void)setQuestionController:(id<IGSurveyQuestionController>)arg1 ;
-(IGSurveyQuestion *)question;
-(void)setDelegate:(id<IGSurveyQuestionViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGSurveyQuestionViewDelegate>)delegate;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
@end

