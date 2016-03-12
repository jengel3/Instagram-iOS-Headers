
#import <Instagram/Instagram-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface JKDictionary : NSMutableDictionary <NSCopying, NSMutableCopying, NSFastEnumeration> {

	unsigned count;
	unsigned capacity;
	unsigned mutations;
	JKHashTableEntry* entry;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_IG1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
@end

