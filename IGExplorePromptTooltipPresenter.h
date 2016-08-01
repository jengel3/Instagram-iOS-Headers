
#import <Instagram/IGExplorePromptTooltipDelegate.h>

@protocol IGExplorePromptTooltipPresenterDelegate;
@class UIView, IGExplorePromptTooltipView, IGExplorePromptTooltipController, NSString;

@interface IGExplorePromptTooltipPresenter : NSObject <IGExplorePromptTooltipDelegate> {

	id<IGExplorePromptTooltipPresenterDelegate> _delegate;
	UIView* _tabBarView;
	UIView* _parentView;
	IGExplorePromptTooltipView* _tooltipView;
	IGExplorePromptTooltipController* _tooltipController;

}

@property (assign,nonatomic,__weak) UIView * tabBarView;                                               //@synthesize tabBarView=_tabBarView - In the implementation block
@property (assign,nonatomic,__weak) UIView * parentView;                                               //@synthesize parentView=_parentView - In the implementation block
@property (assign,nonatomic,__weak) IGExplorePromptTooltipView * tooltipView;                          //@synthesize tooltipView=_tooltipView - In the implementation block
@property (nonatomic,retain) IGExplorePromptTooltipController * tooltipController;                     //@synthesize tooltipController=_tooltipController - In the implementation block
@property (assign,nonatomic,__weak) id<IGExplorePromptTooltipPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGExplorePromptTooltipView *)tooltipView;
-(void)didTapExplorePromptTooltip:(id)arg1 ;
-(void)dismissExplorePromptTooltip:(id)arg1 withAnimation:(char)arg2 ;
-(void)presentExplorePromptTooltipWithAnimation:(char)arg1 ;
-(void)displayAttentionOnExploreTab;
-(void)setTooltipView:(IGExplorePromptTooltipView *)arg1 ;
-(IGExplorePromptTooltipController *)tooltipController;
-(UIView *)tabBarView;
-(UIView *)parentView;
-(void)setAttentionOnExploreTabIfNecessary;
-(void)setTabBarView:(UIView *)arg1 ;
-(void)setParentView:(UIView *)arg1 ;
-(void)setTooltipController:(IGExplorePromptTooltipController *)arg1 ;
-(id)initWithTabBarView:(id)arg1 parentView:(id)arg2 ;
-(void)hideTooltipView;
-(char)isInlineGalleryVisible;
-(void)setDelegate:(id<IGExplorePromptTooltipPresenterDelegate>)arg1 ;
-(id<IGExplorePromptTooltipPresenterDelegate>)delegate;
@end

