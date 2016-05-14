/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGInsightsHeaderTabPageViewDataSource.h>

@class UIView, IGInsightsHeaderTabPageView, NSString, NSArray;

@interface IGInsightsChartView : UIView <IGInsightsHeaderTabPageViewDataSource> {

	UIView* _bottomSeparator;
	IGInsightsHeaderTabPageView* _headerTabPageView;
	NSString* _header;
	NSString* _navigateButtonText;
	NSString* _chartStyle;
	NSArray* _chartData;

}

@property (nonatomic,retain) UIView * bottomSeparator;                                     //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) IGInsightsHeaderTabPageView * headerTabPageView;              //@synthesize headerTabPageView=_headerTabPageView - In the implementation block
@property (nonatomic,copy) NSString * header;                                              //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * navigateButtonText;                                  //@synthesize navigateButtonText=_navigateButtonText - In the implementation block
@property (nonatomic,copy) NSString * chartStyle;                                          //@synthesize chartStyle=_chartStyle - In the implementation block
@property (nonatomic,copy) NSArray * chartData;                                            //@synthesize chartData=_chartData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)chartStyle;
-(void)setChartStyle:(NSString *)arg1 ;
-(NSString *)navigateButtonText;
-(IGInsightsHeaderTabPageView *)headerTabPageView;
-(unsigned)numberOfContentViewsForInsightsHeaderTabPageView:(id)arg1 ;
-(id)insightsHeaderTabPageView:(id)arg1 viewForTabAtIndex:(unsigned)arg2 ;
-(id)insightsHeaderTabPageView:(id)arg1 titleForTabAtIndex:(unsigned)arg2 ;
-(id)titleForInsightsHeaderTabPageView:(id)arg1 ;
-(id)navigateButtonTextForInsightsHeaderTabPageView:(id)arg1 ;
-(UIEdgeInsets)contentViewPaddingsForInsightsHeaderTabPageView:(id)arg1 ;
-(id)initWithHeader:(id)arg1 navigateButtonText:(id)arg2 chartStyle:(id)arg3 chartData:(id)arg4 ;
-(void)setHeaderTabPageView:(IGInsightsHeaderTabPageView *)arg1 ;
-(void)setNavigateButtonText:(NSString *)arg1 ;
-(void)setHeaderDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(NSArray *)chartData;
-(void)setChartData:(NSArray *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
@end
