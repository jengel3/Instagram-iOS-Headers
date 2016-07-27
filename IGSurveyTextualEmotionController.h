
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGSurveyQuestionController.h>

@protocol IGSurveyQuestionControllerDelegate;
@class IGSurveyQuestion, IGGroupedTableView, NSString;

@interface IGSurveyTextualEmotionController : NSObject <UITableViewDataSource, UITableViewDelegate, IGSurveyQuestionController> {

	id<IGSurveyQuestionControllerDelegate> _delegate;
	IGSurveyQuestion* _question;
	IGGroupedTableView* _tableView;

}

@property (nonatomic,retain) IGGroupedTableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGSurveyQuestion * question;                                         //@synthesize question=_question - In the implementation block
@property (assign,nonatomic,__weak) id<IGSurveyQuestionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setQuestion:(IGSurveyQuestion *)arg1 ;
-(IGSurveyQuestion *)question;
-(void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(id)colorForAnswerAtIndexPath:(id)arg1 ;
-(void)setDelegate:(id<IGSurveyQuestionControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGSurveyQuestionControllerDelegate>)delegate;
-(id)contentView;
-(IGGroupedTableView *)tableView;
-(void)setTableView:(IGGroupedTableView *)arg1 ;
@end

