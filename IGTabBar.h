/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:58 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface IGTabBar : UIView {

	NSMutableArray* _tabButtons;

}

@property (nonatomic,retain) NSMutableArray * tabButtons;              //@synthesize tabButtons=_tabButtons - In the implementation block
-(NSMutableArray *)tabButtons;
-(void)calculateFramesForButtons:(id)arg1 ;
-(void)addTabButton:(id)arg1 ;
-(void)setTabButtons:(NSMutableArray *)arg1 ;
-(void)layoutSubviews;
@end

