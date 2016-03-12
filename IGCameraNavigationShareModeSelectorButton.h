
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTapButton.h>

@class IGCameraNavigationShareModeSelectorItem, IGLabel, IGCaretView;

@interface IGCameraNavigationShareModeSelectorButton : IGTapButton {

	char _isOpen;
	IGCameraNavigationShareModeSelectorItem* _item;
	IGLabel* _ig_titleLabel;
	IGCaretView* _caretView;

}

@property (assign,nonatomic) IGCameraNavigationShareModeSelectorItem * item;              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) char isOpen;                                                 //@synthesize isOpen=_isOpen - In the implementation block
@property (nonatomic,retain) IGLabel * ig_titleLabel;                                     //@synthesize ig_titleLabel=_ig_titleLabel - In the implementation block
@property (nonatomic,retain) IGCaretView * caretView;                                     //@synthesize caretView=_caretView - In the implementation block
-(void)setIg_titleLabel:(IGLabel *)arg1 ;
-(IGLabel *)ig_titleLabel;
-(void)setIsOpen:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGCameraNavigationShareModeSelectorItem *)item;
-(void)setItem:(IGCameraNavigationShareModeSelectorItem *)arg1 ;
-(IGCaretView *)caretView;
-(void)setCaretView:(IGCaretView *)arg1 ;
-(char)isOpen;
@end

