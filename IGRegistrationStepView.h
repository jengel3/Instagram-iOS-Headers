/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGTextField, UIButton, UIView, NSString;

@interface IGRegistrationStepView : UIView {

	IGTextField* _textField;
	UIButton* _nextButton;
	UIView* _separatorLine;
	NSString* _placeholderText;

}

@property (nonatomic,retain) IGTextField * textField;                 //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                   //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                  //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) NSString * placeholderText;              //@synthesize placeholderText=_placeholderText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 placeholderText:(id)arg2 ;
-(void)addNextButton;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(IGTextField *)textField;
-(void)setTextField:(IGTextField *)arg1 ;
-(void)setNextButton:(UIButton *)arg1 ;
-(UIButton *)nextButton;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
@end

