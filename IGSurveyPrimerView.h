/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:03 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGSurveryPrimerViewDelegate;
@interface IGSurveyPrimerView : UIView {

	id<IGSurveryPrimerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGSurveryPrimerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)labelTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGSurveryPrimerViewDelegate>)arg1 ;
-(id<IGSurveryPrimerViewDelegate>)delegate;
@end

