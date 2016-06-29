
#import <Foundation/NSProxy.h>

@class IGListAdapter;

@interface IGListAdapterProxy : NSProxy {

	id _collectionViewTarget;
	id _scrollViewTarget;
	IGListAdapter* _interceptor;

}
-(id)initWithCollectionViewTarget:(id)arg1 scrollViewTarget:(id)arg2 interceptor:(id)arg3 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

