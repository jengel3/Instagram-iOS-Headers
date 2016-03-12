
#import <CoreFoundation/NSEnumerator.h>

@interface JKDictionaryEnumerator : NSEnumerator {

	id collection;
	unsigned nextObject;

}
-(id)initWithJKDictionary:(id)arg1 ;
-(void)dealloc;
-(id)allObjects;
-(id)nextObject;
@end

