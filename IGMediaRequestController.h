
#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGMediaRequestControllerDelegate;
@class NSMutableDictionary, NSString;

@interface IGMediaRequestController : NSObject <IGMediaRequestDelegate> {

	id<IGMediaRequestControllerDelegate> _delegate;
	NSMutableDictionary* _urlImageCache;

}

@property (nonatomic,retain) NSMutableDictionary * urlImageCache;                               //@synthesize urlImageCache=_urlImageCache - In the implementation block
@property (assign,nonatomic,__weak) id<IGMediaRequestControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(void)setUrlImageCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)urlImageCache;
-(id)fetchImageForURL:(id)arg1 ;
-(void)setDelegate:(id<IGMediaRequestControllerDelegate>)arg1 ;
-(id)init;
-(id<IGMediaRequestControllerDelegate>)delegate;
@end

