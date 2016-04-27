

@protocol FBSDKShareOpenGraphValueContaining <NSObject,NSSecureCoding>
@required
-(id)photoForKey:(id)arg1;
-(void)setPhoto:(id)arg1 forKey:(id)arg2;
-(id)URLForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(id)objectForKeyedSubscript:(id)arg1;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1;
-(id)objectForKey:(id)arg1;
-(void)removeObjectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(id)stringForKey:(id)arg1;
-(id)objectEnumerator;
-(id)keyEnumerator;
-(void)parseProperties:(id)arg1;
-(id)numberForKey:(id)arg1;
-(void)setNumber:(id)arg1 forKey:(id)arg2;
-(void)setArray:(id)arg1 forKey:(id)arg2;
-(void)setString:(id)arg1 forKey:(id)arg2;
-(void)setURL:(id)arg1 forKey:(id)arg2;

@end

