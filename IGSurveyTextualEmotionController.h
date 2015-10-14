/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:03 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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
-(void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(IGSurveyQuestion *)question;
-(void)setQuestion:(IGSurveyQuestion *)arg1 ;
-(id)colorForAnswerAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGSurveyQuestionControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGSurveyQuestionControllerDelegate>)delegate;
-(id)contentView;
-(void)setTableView:(IGGroupedTableView *)arg1 ;
-(IGGroupedTableView *)tableView;
@end

