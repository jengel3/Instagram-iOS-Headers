
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class NSString, NSArray, UIView;

@interface IGMediaTabBar : UIControl {

	char _selectAlbumOpened;
	NSString* _albumTitle;
	int _selectedIndex;
	NSArray* _buttons;
	UIView* _highlight;

}

@property (nonatomic,copy) NSString * albumTitle;                 //@synthesize albumTitle=_albumTitle - In the implementation block
@property (assign,nonatomic) int selectedIndex;                   //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic) char selectAlbumOpened;              //@synthesize selectAlbumOpened=_selectAlbumOpened - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                   //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * highlight;                  //@synthesize highlight=_highlight - In the implementation block
+(float)textInset;
+(float)defaultHeight;
-(float)highlightHeight;
-(char)selectAlbumOpened;
-(void)setSelectAlbumOpened:(char)arg1 ;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(NSString *)albumTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
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

