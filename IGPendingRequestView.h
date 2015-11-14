/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:46 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGSimpleButton, UIActivityIndicatorView;

@interface IGPendingRequestView : UIView {

	/*^block*/id _acceptBlock;
	IGSimpleButton* _approveButton;
	IGSimpleButton* _ignoreButton;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,copy) id acceptBlock;                                   //@synthesize acceptBlock=_acceptBlock - In the implementation block
@property (nonatomic,retain) IGSimpleButton * approveButton;                 //@synthesize approveButton=_approveButton - In the implementation block
@property (nonatomic,retain) IGSimpleButton * ignoreButton;                  //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(void)setAcceptBlock:(id)arg1 ;
-(IGSimpleButton *)approveButton;
-(void)onApproveButtonTapped;
-(void)onIgnoreButtonTapped;
-(id)acceptBlock;
-(void)setApproveButton:(IGSimpleButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setIgnoreButton:(IGSimpleButton *)arg1 ;
-(IGSimpleButton *)ignoreButton;
@end

