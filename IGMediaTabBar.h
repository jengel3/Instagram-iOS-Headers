
#import <UIKit/UIControl.h>

@class NSArray, UIView;

@interface IGMediaTabBar : UIControl {

	int _selectedIndex;
	NSArray* _buttons;
	UIView* _highlight;

}

@property (assign,nonatomic) int selectedIndex;               //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) NSArray * buttons;               //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * highlight;              //@synthesize highlight=_highlight - In the implementation block
+(float)textInset;
+(float)defaultHeight;
-(float)highlightHeight;
-(void)layoutSubviews;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)setHighlight:(UIView *)arg1 ;
-(UIView *)highlight;
-(float)spacing;
-(float)itemSize;
-(NSArray *)buttons;
-(void)buttonWasTapped:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

