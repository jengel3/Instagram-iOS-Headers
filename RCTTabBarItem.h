
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UITabBarItem, UIImage;

@interface RCTTabBarItem : UIView {

	char _renderAsOriginal;
	char _selected;
	UITabBarItem* _barItem;
	id _badge;
	UIImage* _icon;
	UIImage* _selectedIcon;
	int _systemIcon;
	/*^block*/id _onPress;

}

@property (nonatomic,copy) id badge;                                       //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) UIImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIImage * selectedIcon;                       //@synthesize selectedIcon=_selectedIcon - In the implementation block
@property (assign,nonatomic) int systemIcon;                               //@synthesize systemIcon=_systemIcon - In the implementation block
@property (assign,nonatomic) char renderAsOriginal;                        //@synthesize renderAsOriginal=_renderAsOriginal - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UITabBarItem * barItem;                     //@synthesize barItem=_barItem - In the implementation block
@property (nonatomic,copy) id onPress;                                     //@synthesize onPress=_onPress - In the implementation block
-(id)reactViewController;
-(void)setOnPress:(id)arg1 ;
-(id)onPress;
-(UITabBarItem *)barItem;
-(void)setSystemIcon:(int)arg1 ;
-(void)setSelectedIcon:(UIImage *)arg1 ;
-(UIImage *)selectedIcon;
-(int)systemIcon;
-(char)renderAsOriginal;
-(void)setRenderAsOriginal:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(id)badge;
-(void)setBadge:(id)arg1 ;
@end

