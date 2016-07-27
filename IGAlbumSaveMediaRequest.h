
#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGAlbumSaveMediaRequestDelegate;
@class NSString;

@interface IGAlbumSaveMediaRequest : NSObject <IGMediaRequestDelegate> {

	id<IGAlbumSaveMediaRequestDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<IGAlbumSaveMediaRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItem:(id)arg1 delegate:(id)arg2 ;
-(void)saveImageToCameraRoll:(id)arg1 ;
-(void)saveVideoDataToCameraRoll:(id)arg1 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didReceiveDownloadBytesRead:(unsigned)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4 forURL:(id)arg5 ;
-(id)initWithAsset:(id)arg1 delegate:(id)arg2 ;
-(id<IGAlbumSaveMediaRequestDelegate>)delegate;
@end

