
#import <Foundation/NSProxy.h>

@class IGListAdapter;

@interface IGListAdapterProxy : NSProxy {

	id _target;
	IGListAdapter* _interceptor;

}
-(id)initWithTarget:(id)arg1 interceptor:(id)arg2 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

