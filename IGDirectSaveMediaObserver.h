
#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGDirectSaveMediaDelegate;
@class NSString;

@interface IGDirectSaveMediaObserver : NSObject <IGMediaRequestDelegate> {

	id<IGDirectSaveMediaDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGDirectSaveMediaDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)didLoadMediaData:(id)arg1 isVideo:(char)arg2 ;
-(void)writeVideoToCameraRoll:(id)arg1 ;
-(void)setDelegate:(id<IGDirectSaveMediaDelegate>)arg1 ;
-(id<IGDirectSaveMediaDelegate>)delegate;
@end

