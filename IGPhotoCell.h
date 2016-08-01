
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGFeedPhotoViewDelegate.h>
#import <Instagram/IGFeedItemZoomControllerLoadingDelegate.h>

@protocol IGPhotoCellDelegate, IGFeedItemZoomControllerZoomingDelegate;
@class IGFeedPhotoView, IGPostItem, IGFeedItemZoomController, NSString;

@interface IGPhotoCell : UICollectionViewCell <IGFeedPhotoViewDelegate, IGFeedItemZoomControllerLoadingDelegate> {

	IGFeedPhotoView* _photoView;
	IGPostItem* _post;
	id<IGPhotoCellDelegate> _delegate;
	id<IGFeedItemZoomControllerZoomingDelegate> _zoomingDelegate;
	IGFeedItemZoomController* _zoomController;

}

@property (nonatomic,retain) IGFeedItemZoomController * zoomController;                                       //@synthesize zoomController=_zoomController - In the implementation block
@property (nonatomic,retain) IGFeedPhotoView * photoView;                                                     //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic,__weak) IGPostItem * post;                                                        //@synthesize post=_post - In the implementation block
@property (assign,nonatomic,__weak) id<IGPhotoCellDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomControllerZoomingDelegate> zoomingDelegate;              //@synthesize zoomingDelegate=_zoomingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPost:(IGPostItem *)arg1 ;
-(IGPostItem *)post;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(char)isMediaViewLoaded;
-(IGFeedItemZoomController *)zoomController;
-(void)setZoomController:(IGFeedItemZoomController *)arg1 ;
-(void)setZoomingDelegate:(id<IGFeedItemZoomControllerZoomingDelegate>)arg1 ;
-(id<IGFeedItemZoomControllerZoomingDelegate>)zoomingDelegate;
-(IGFeedPhotoView *)photoView;
-(void)setPhotoView:(IGFeedPhotoView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGPhotoCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGPhotoCellDelegate>)delegate;
-(void)prepareForReuse;
@end

