
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageProgressViewDelegate.h>
#import <Instagram/IGAlbumPlayerCurrentItemViewProtocol.h>

@protocol IGAlbumPlayerViewPhotoViewDelegate;
@class IGImageProgressView, NSString;

@interface IGAlbumPlayerViewPhotoView : UIView <IGImageProgressViewDelegate, IGAlbumPlayerCurrentItemViewProtocol> {

	id<IGAlbumPlayerViewPhotoViewDelegate> _delegate;
	IGImageProgressView* _photoView;

}

@property (nonatomic,readonly) IGImageProgressView * photoView;                                   //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumPlayerViewPhotoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)isViewFinishedLoading;
-(void)configureWithPhoto:(id)arg1 ;
-(IGImageProgressView *)photoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumPlayerViewPhotoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGAlbumPlayerViewPhotoViewDelegate>)delegate;
@end

