/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGSurveyQuestion, IGSurveyAnswer, UIImageView, UILabel;

@interface IGSurveyResultView : UIView {

	IGSurveyQuestion* _question;
	IGSurveyAnswer* _answer;
	UIImageView* _checkmarkImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) IGSurveyQuestion * question;                   //@synthesize question=_question - In the implementation block
@property (nonatomic,retain) IGSurveyAnswer * answer;                       //@synthesize answer=_answer - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkImageView;              //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(IGSurveyQuestion *)question;
-(void)setQuestion:(IGSurveyQuestion *)arg1 ;
-(id)checkmarkImageForAnswer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(IGSurveyAnswer *)answer;
-(void)setAnswer:(IGSurveyAnswer *)arg1 ;
@end

