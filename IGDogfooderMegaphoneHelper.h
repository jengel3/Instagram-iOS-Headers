/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:00 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>

@protocol IGDogfooderMegaphoneHelperDelegate;
@class NSDate, NSString;

@interface IGDogfooderMegaphoneHelper : NSObject <IGGenericMegaphoneViewDelegate> {

	id<IGDogfooderMegaphoneHelperDelegate> _delegate;
	int _mode;
	NSDate* _buildTime;

}

@property (assign,nonatomic,__weak) id<IGDogfooderMegaphoneHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSDate * buildTime;                                                //@synthesize buildTime=_buildTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)megaphoneDidDismiss:(id)arg1 ;
-(void)megaphone:(id)arg1 didOpenURL:(id)arg2 ;
-(void)megaphone:(id)arg1 didTapButton:(id)arg2 ;
-(id)createDogfooderSoftNagMegaphoneViewWithFrame:(CGRect)arg1 displaySource:(id)arg2 ;
-(char)shouldShowDogfooderSoftNagMegaphone;
-(NSDate *)buildTime;
-(double)buildAge;
-(id)actionURLForMode:(int)arg1 ;
-(id)megaphoneButtonWithTitle:(id)arg1 buttonURL:(id)arg2 ;
-(id)createDogfooderMegaphoneWithButtonURL:(id)arg1 ;
-(id)createOpenDogfooderBuildMegaphoneWithButtonURL:(id)arg1 ;
-(void)setDelegate:(id<IGDogfooderMegaphoneHelperDelegate>)arg1 ;
-(id)init;
-(id<IGDogfooderMegaphoneHelperDelegate>)delegate;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)initWithDelegate:(id)arg1 ;
@end

