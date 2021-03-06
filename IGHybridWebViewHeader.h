
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol IGHybridWebViewHeaderDelegate, IGHybridWebViewConfig;
@class UINavigationBar, UIView, NSMutableDictionary, NSArray, NSString;

@interface IGHybridWebViewHeader : UIView <UINavigationBarDelegate> {

	id<IGHybridWebViewHeaderDelegate> _delegate;
	UINavigationBar* _navigationBar;
	UIView* _navigationBarShadow;
	id<IGHybridWebViewConfig> _config;
	NSMutableDictionary* _navigationItemByItem;

}

@property (nonatomic,retain) UINavigationBar * navigationBar;                                //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIView * navigationBarShadow;                                   //@synthesize navigationBarShadow=_navigationBarShadow - In the implementation block
@property (nonatomic,readonly) id<IGHybridWebViewConfig> config;                             //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * navigationItemByItem;                   //@synthesize navigationItemByItem=_navigationItemByItem - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (assign,nonatomic,__weak) id<IGHybridWebViewHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 config:(id)arg2 ;
-(void)pushItem:(id)arg1 ;
-(void)popToItemWithId:(id)arg1 ;
-(void)updateCurrentItemWithChanges:(/*^block*/id)arg1 ;
-(void)setUpNavigationBar;
-(void)setUpShadow;
-(id)navigationItemFromItem:(id)arg1 ;
-(NSMutableDictionary *)navigationItemByItem;
-(void)popItem;
-(id)itemForNavigationItem:(id)arg1 ;
-(void)setUpNavigationItem:(id)arg1 forHeaderItem:(id)arg2 ;
-(void)didTapCloseButtonWithBarButton:(id)arg1 ;
-(void)didTapBackButtonWithBarButton:(id)arg1 ;
-(void)didTapRightButtonWithBarButton:(id)arg1 ;
-(id)leftBarButtonForItem:(id)arg1 ;
-(id)rightBarButtonForItem:(id)arg1 ;
-(UIView *)navigationBarShadow;
-(void)setNavigationBarShadow:(UIView *)arg1 ;
-(void)setDelegate:(id<IGHybridWebViewHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGHybridWebViewHeaderDelegate>)delegate;
-(UINavigationBar *)navigationBar;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(char)navigationBar:(id)arg1 shouldPushItem:(id)arg2 ;
-(void)navigationBar:(id)arg1 didPushItem:(id)arg2 ;
-(char)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)navigationBar:(id)arg1 didPopItem:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)currentItem;
-(id<IGHybridWebViewConfig>)config;
@end

