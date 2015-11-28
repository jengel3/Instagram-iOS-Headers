
@class IGSurveyQuestion;


@protocol IGSurveyQuestionController
@property (nonatomic,retain) IGSurveyQuestion * question; 
@property (assign,nonatomic,__weak) id<IGSurveyQuestionControllerDelegate> delegate; 
@required
-(IGSurveyQuestion *)question;
-(void)setQuestion:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGSurveyQuestionControllerDelegate>)delegate;
-(id)contentView;

@end

