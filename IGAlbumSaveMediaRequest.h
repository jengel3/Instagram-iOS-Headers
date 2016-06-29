
#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGAlbumSaveMediaRequestDelegate;
@class NSString;

@interface IGAlbumSaveMediaRequest : NSObject <IGMediaRequestDelegate> {

	id<IGAlbumSaveMediaRequestDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGAlbumSaveMediaRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didReceiveDownloadBytesRead:(unsigned)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4 forURL:(id)arg5 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(id)initWithVideo:(id)arg1 ;
-(void)writeVideoToCameraRoll:(id)arg1 ;
-(void)writePhotoToCameraRoll:(id)arg1 ;
-(id)initWithPhoto:(id)arg1 ;
-(void)setDelegate:(id<IGAlbumSaveMediaRequestDelegate>)arg1 ;
-(id<IGAlbumSaveMediaRequestDelegate>)delegate;
@end

