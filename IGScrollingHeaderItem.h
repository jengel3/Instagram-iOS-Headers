/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:00 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScrollView, NSArray, UIViewController;

@interface IGScrollingHeaderItem : NSObject {

	char _shouldScrollAwayNavigationBar;
	char _shouldScrollAwayStatusBar;
	char _headerIsScrolledAway;
	UIScrollView* _scrollView;
	NSArray* _additionalScrollingViews;
	float _headerHeight;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) char shouldScrollAwayNavigationBar;                    //@synthesize shouldScrollAwayNavigationBar=_shouldScrollAwayNavigationBar - In the implementation block
@property (nonatomic,readonly) char shouldScrollAwayStatusBar;                        //@synthesize shouldScrollAwayStatusBar=_shouldScrollAwayStatusBar - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                      //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) NSArray * additionalScrollingViews;                    //@synthesize additionalScrollingViews=_additionalScrollingViews - In the implementation block
@property (assign,nonatomic) float headerHeight;                                      //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) char headerIsScrolledAway;                               //@synthesize headerIsScrolledAway=_headerIsScrolledAway - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)initWithViewController:(id)arg1 shouldScrollAwayNavigationBar:(char)arg2 shouldScrollAwayStatusBar:(char)arg3 ;
-(void)setScrollView:(id)arg1 additionalScrollingViews:(id)arg2 headerHeight:(float)arg3 ;
-(char)shouldScrollAwayStatusBar;
-(char)headerIsScrolledAway;
-(char)shouldScrollAwayNavigationBar;
-(NSArray *)additionalScrollingViews;
-(void)setHeaderIsScrolledAway:(char)arg1 ;
-(float)maximumHeaderOffset;
-(void)setScrollView:(id)arg1 additionalScrollingViews:(id)arg2 ;
-(id)description;
-(UIViewController *)viewController;
-(UIScrollView *)scrollView;
-(float)headerHeight;
-(void)setHeaderHeight:(float)arg1 ;
@end

