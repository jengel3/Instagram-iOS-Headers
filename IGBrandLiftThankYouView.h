/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:11 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGBrandLiftThankYouViewDelegate;
@class UILabel, IGLabel, IGStringStyle;

@interface IGBrandLiftThankYouView : UIView {

	char _showResults;
	id<IGBrandLiftThankYouViewDelegate> _delegate;
	UILabel* _messageLabel;
	IGLabel* _doneLabel;
	IGLabel* _showResultsLabel;
	IGStringStyle* _buttonStyle;

}

@property (assign,nonatomic,__weak) id<IGBrandLiftThankYouViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showResults;                                                 //@synthesize showResults=_showResults - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                           //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) IGLabel * doneLabel;                                              //@synthesize doneLabel=_doneLabel - In the implementation block
@property (nonatomic,retain) IGLabel * showResultsLabel;                                       //@synthesize showResultsLabel=_showResultsLabel - In the implementation block
@property (nonatomic,retain) IGStringStyle * buttonStyle;                                      //@synthesize buttonStyle=_buttonStyle - In the implementation block
-(void)setButtonStyle:(IGStringStyle *)arg1 ;
-(IGStringStyle *)buttonStyle;
-(void)setShowResults:(char)arg1 ;
-(char)showResults;
-(id)initWithText:(id)arg1 showResults:(char)arg2 withFrame:(CGRect)arg3 ;
-(IGLabel *)showResultsLabel;
-(IGLabel *)doneLabel;
-(void)doneLabelTapped;
-(void)showResultsLabelTapped;
-(void)setDoneLabel:(IGLabel *)arg1 ;
-(void)setShowResultsLabel:(IGLabel *)arg1 ;
-(void)setDelegate:(id<IGBrandLiftThankYouViewDelegate>)arg1 ;
-(id<IGBrandLiftThankYouViewDelegate>)delegate;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
@end

