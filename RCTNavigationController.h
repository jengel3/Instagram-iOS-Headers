
#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationBarDelegate.h>

@class NSString;

@interface RCTNavigationController : UINavigationController <UINavigationBarDelegate> {

	/*^block*/id _scrollCallback;
	unsigned _navigationLock;

}

@property (assign,nonatomic) unsigned navigationLock;               //@synthesize navigationLock=_navigationLock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)navigationLock;
-(void)setNavigationLock:(unsigned)arg1 ;
-(id)initWithScrollCallback:(/*^block*/id)arg1 ;
-(char)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
@end

