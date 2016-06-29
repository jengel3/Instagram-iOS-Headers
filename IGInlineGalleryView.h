
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGInlineGalleryTitleBarDelegate.h>

@protocol IGInlineGalleryTitleBar, IGInlineGalleryViewDelegate;
@class UIView, UICollectionView, UIButton;

@interface IGInlineGalleryView : UIView <IGInlineGalleryTitleBarDelegate> {

	float _photoThumbnailSize;
	UIView*<IGInlineGalleryTitleBar> _titleBar;
	UICollectionView* _collectionView;
	UIButton* _cancelButton;
	int _state;
	int _style;
	id<IGInlineGalleryViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGInlineGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) int state;                                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int style;                                                    //@synthesize style=_style - In the implementation block
-(void)didTapTitleBar;
-(void)didTapDismiss;
-(void)didTapCamera;
-(void)didTapSeeAll;
-(id)createNewTitleBarForStyle:(int)arg1 ;
-(char)hasVerticalPaddingAroundScrollView;
-(char)hasCancelButton;
-(id)initWithWidth:(float)arg1 delegate:(id)arg2 photoThumbnailSize:(float)arg3 style:(int)arg4 ;
-(void)didTapCancel;
-(void)setDelegate:(id<IGInlineGalleryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInlineGalleryViewDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(UICollectionView *)collectionView;
@end

