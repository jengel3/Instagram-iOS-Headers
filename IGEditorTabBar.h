
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGEditorTabBarDelegate;
@class UIImage, NSArray, UIImageView;

@interface IGEditorTabBar : UIView {

	UIImage* _selectionIndicatorImage;
	NSArray* _tabViews;
	id<IGEditorTabBarDelegate> _delegate;
	unsigned _selectedIndex;
	UIImageView* _selectedIndicatorImageView;

}

@property (assign,nonatomic) unsigned selectedIndex;                                  //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) UIImageView * selectedIndicatorImageView;                //@synthesize selectedIndicatorImageView=_selectedIndicatorImageView - In the implementation block
@property (nonatomic,retain) UIImage * selectionIndicatorImage;                       //@synthesize selectionIndicatorImage=_selectionIndicatorImage - In the implementation block
@property (nonatomic,copy) NSArray * tabViews;                                        //@synthesize tabViews=_tabViews - In the implementation block
@property (nonatomic,retain) UIView*<IGEditorTabView> selectedTabView; 
@property (assign,nonatomic,__weak) id<IGEditorTabBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIImageView *)selectedIndicatorImageView;
-(void)setSelectedIndicatorImageView:(UIImageView *)arg1 ;
-(UIView*<IGEditorTabView>)selectedTabView;
-(void)setTabViews:(NSArray *)arg1 ;
-(void)setSelectedTabView:(UIView*<IGEditorTabView>)arg1 ;
-(NSArray *)tabViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGEditorTabBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGEditorTabBarDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)selectedIndex;
-(void)setSelectedIndex:(unsigned)arg1 ;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
@end

