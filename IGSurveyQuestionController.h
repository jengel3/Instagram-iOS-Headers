
@class IGSurveyQuestion;


@protocol IGSurveyQuestionController
@property (nonatomic,retain) IGSurveyQuestion * question; 
@property (assign,nonatomic,__weak) id<IGSurveyQuestionControllerDelegate> delegate; 
@required
-(void)setQuestion:(id)arg1;
-(IGSurveyQuestion *)question;
-(void)setDelegate:(id)arg1;
-(id<IGSurveyQuestionControllerDelegate>)delegate;
-(id)contentView;

@end

