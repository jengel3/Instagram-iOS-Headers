

@class NSMapTable;

@interface IGObjectStore : NSObject {

	NSMapTable* _objects;

}
-(id)objectWithDict:(id)arg1 ;
-(id)storedObjectWithPK:(id)arg1 ;
-(id)objectWithPK:(id)arg1 ;
-(id)objectForObject:(id)arg1 ;
-(id)storedObjectForKey:(id)arg1 ;
-(void)setStoredObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectFromDict:(id)arg1 ;
-(void)removeObjectWithPK:(id)arg1 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)allObjects;
-(void)clear;
-(Class)objectClass;
@end

