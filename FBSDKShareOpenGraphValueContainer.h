
#import <Instagram/FBSDKShareOpenGraphValueContaining.h>

@class NSMutableDictionary, NSString;

@interface FBSDKShareOpenGraphValueContainer : NSObject <FBSDKShareOpenGraphValueContaining> {

	NSMutableDictionary* _properties;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(char)isEqualToShareOpenGraphValueContainer:(id)arg1 ;
-(char)requireKeyNamespace;
-(id)_valueOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)photoForKey:(id)arg1 ;
-(void)setPhoto:(id)arg1 forKey:(id)arg2 ;
-(id)URLForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(id)objectEnumerator;
-(id)keyEnumerator;
-(void)parseProperties:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(id)allData;
-(id)_valueForKey:(id)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)allProperties;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
@end

