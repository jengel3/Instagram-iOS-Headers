
#import <UIKit/UIControl.h>

@class NSArray, UIView, IGMediaTabBarUploadProgressIndicator;

@interface IGMediaTabBar : UIControl {

	int _selectedIndex;
	NSArray* _buttons;
	UIView* _highlight;
	IGMediaTabBarUploadProgressIndicator* _uploadProgressIndicator;

}

@property (nonatomic,retain) NSArray * buttons;                                                           //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * highlight;                                                          //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,retain) IGMediaTabBarUploadProgressIndicator * uploadProgressIndicator;              //@synthesize uploadProgressIndicator=_uploadProgressIndicator - In the implementation block
@property (assign,nonatomic) int selectedIndex;                                                           //@synthesize selectedIndex=_selectedIndex - In the implementation block
+(float)textInset;
+(float)defaultHeight;
-(id)initWithItems:(id)arg1 showsAlbumItemsUploadProgress:(char)arg2 ;
-(float)highlightHeight;
-(IGMediaTabBarUploadProgressIndicator *)uploadProgressIndicator;
-(void)setUploadProgressIndicator:(IGMediaTabBarUploadProgressIndicator *)arg1 ;
-(void)layoutSubviews;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(void)setHighlight:(UIView *)arg1 ;
-(UIView *)highlight;
-(float)spacing;
-(float)itemSize;
-(NSArray *)buttons;
-(void)buttonWasTapped:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

