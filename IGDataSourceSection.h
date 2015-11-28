

@protocol NSObject;
@class NSArray;

@interface IGDataSourceSection : NSObject {

	NSArray* _objects;
	id<NSObject> _key;

}

@property (nonatomic,readonly) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) id<NSObject> key;               //@synthesize key=_key - In the implementation block
-(id)initWithKey:(id)arg1 objects:(id)arg2 ;
-(id)sectionByAppendingObjects:(id)arg1 ;
-(id)sectionByPrependingObjects:(id)arg1 ;
-(id)sectionByRemovingObjectsAtIndexes:(id)arg1 ;
-(NSArray *)objects;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id<NSObject>)key;
-(id)initWithObjects:(id)arg1 ;
@end

