/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:03 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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

@property (assign,nonatomic,__weak) id<IGSurveyQuestionViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) id<IGSurveyQuestionController> questionController;              //@synthesize questionController=_questionController - In the implementation block
@property (nonatomic,retain) IGSurveyQuestion * question;                                    //@synthesize question=_question - In the implementation block
-(id<IGSurveyQuestionController>)questionController;
-(IGSurveyQuestion *)question;
-(void)setQuestion:(IGSurveyQuestion *)arg1 ;
-(void)surveyAnswerWasSelectedWith:(id)arg1 ;
-(void)setQuestionController:(id<IGSurveyQuestionController>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 question:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<IGSurveyQuestionViewDelegate>)arg1 ;
-(id<IGSurveyQuestionViewDelegate>)delegate;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
@end

