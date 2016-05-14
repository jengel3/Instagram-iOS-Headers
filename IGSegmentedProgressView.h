/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, NSMutableArray, NSArray;

@interface IGSegmentedProgressView : UIView {

	UIColor* _activeSegmentColor;
	UIColor* _inactiveSegmentColor;
	unsigned _activeSegmentIndex;
	NSMutableArray* _segments;

}

@property (nonatomic,retain) NSMutableArray * segments;                   //@synthesize segments=_segments - In the implementation block
@property (nonatomic,copy) NSArray * progressNumbers; 
@property (nonatomic,retain) UIColor * activeSegmentColor;                //@synthesize activeSegmentColor=_activeSegmentColor - In the implementation block
@property (nonatomic,retain) UIColor * inactiveSegmentColor;              //@synthesize inactiveSegmentColor=_inactiveSegmentColor - In the implementation block
@property (assign,nonatomic) unsigned activeSegmentIndex;                 //@synthesize activeSegmentIndex=_activeSegmentIndex - In the implementation block
@property (nonatomic,readonly) float totalProgress; 
-(void)resetCurrentSegmentsWithProgressNumbers:(id)arg1 ;
-(void)updateProgress:(float)arg1 forSegmentAtIndex:(unsigned)arg2 animated:(char)arg3 ;
-(void)setProgressNumbers:(id)arg1 animated:(char)arg2 ;
-(void)updateProgress:(float)arg1 forSegmentAtIndex:(unsigned)arg2 ;
-(void)setProgressNumbers:(NSArray *)arg1 ;
-(NSArray *)progressNumbers;
-(void)setActiveSegmentIndex:(unsigned)arg1 ;
-(void)setActiveSegmentColor:(UIColor *)arg1 ;
-(void)setInactiveSegmentColor:(UIColor *)arg1 ;
-(UIColor *)activeSegmentColor;
-(UIColor *)inactiveSegmentColor;
-(unsigned)activeSegmentIndex;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)totalProgress;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
@end
