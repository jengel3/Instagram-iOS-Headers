
#import <Instagram/IGTimerProxyObjectType.h>

@protocol IGTimerProxyObjectType;
@class NSString;

@interface IGTimerProxy : NSObject <IGTimerProxyObjectType> {

	id<IGTimerProxyObjectType> _proxyObject;

}

@property (nonatomic,__weak,readonly) id<IGTimerProxyObjectType> proxyObject;              //@synthesize proxyObject=_proxyObject - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProxyObject:(id)arg1 ;
-(void)didFireTimer:(id)arg1 ;
-(id<IGTimerProxyObjectType>)proxyObject;
@end

