
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTapButton.h>

@protocol IGQuickCamInputLibraryAsset;
@class PHImageRequestOptions, UIImageView;

@interface IGQuickCamLibraryButton : IGTapButton {

	id<IGQuickCamInputLibraryAsset> _asset;
	PHImageRequestOptions* _imageRequestOptions;
	UIImageView* _thumbnailView;
	int _requestID;

}

@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;              //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) int requestID;                                            //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputLibraryAsset> asset;                    //@synthesize asset=_asset - In the implementation block
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(PHImageRequestOptions *)imageRequestOptions;
-(void)cancelImageRequest;
-(int)requestID;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailView;
-(id<IGQuickCamInputLibraryAsset>)asset;
-(void)setAsset:(id<IGQuickCamInputLibraryAsset>)arg1 ;
-(void)setRequestID:(int)arg1 ;
@end

