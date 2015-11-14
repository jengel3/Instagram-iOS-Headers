/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:46 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSMutableArray;

@interface IGCameraGuideView : UIView {

	unsigned _subdivisionCount;
	UIView* _containerView;
	NSMutableArray* _xAxisGridLines;
	NSMutableArray* _yAxisGridLines;

}

@property (assign,nonatomic) unsigned subdivisionCount;                    //@synthesize subdivisionCount=_subdivisionCount - In the implementation block
@property (nonatomic,retain) UIView * containerView;                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSMutableArray * xAxisGridLines;              //@synthesize xAxisGridLines=_xAxisGridLines - In the implementation block
@property (nonatomic,retain) NSMutableArray * yAxisGridLines;              //@synthesize yAxisGridLines=_yAxisGridLines - In the implementation block
-(void)setUpGridSubviewGuides:(id)arg1 ;
-(void)setSubdivisionCount:(unsigned)arg1 animated:(char)arg2 ;
-(NSMutableArray *)xAxisGridLines;
-(NSMutableArray *)yAxisGridLines;
-(void)setSubdivisionCount:(unsigned)arg1 ;
-(unsigned)subdivisionCount;
-(void)setXAxisGridLines:(NSMutableArray *)arg1 ;
-(void)setYAxisGridLines:(NSMutableArray *)arg1 ;
-(void)show:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
@end

