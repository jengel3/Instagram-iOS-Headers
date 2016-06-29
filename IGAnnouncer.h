

#import <Instagram/Instagram-Structs.h>
@interface IGAnnouncer : NSObject {

	shared_ptr<const std::__1::vector<__weak id, std::__1::allocator<__weak id> > >* _listenerVector;
	Mutex _listenerAddRemoveLock;

}
@end

