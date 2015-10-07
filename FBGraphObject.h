/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:17 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>
#import <Instagram/FBGraphObject.h>

@protocol FBGraphObject <NSObject>
@property (assign,nonatomic) char provisionedForPost; 
@optional
-(char)provisionedForPost;
-(void)setProvisionedForPost:(char)arg1;

@required
-(unsigned)count;
-(void)removeObjectForKey:(id)arg1;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;

@end


@class NSMutableDictionary, NSString;

@interface FBGraphObject : NSMutableDictionary <FBGraphObject> {

	NSMutableDictionary* _jsonObject;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char provisionedForPost; 
+(id)graphObject;
+(id)graphObjectWrappingDictionary:(id)arg1 ;
+(id)graphObjectWrappingObject:(id)arg1 ;
+(id)openGraphObjectForPostWithType:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 ;
+(int)inferredImplTypeForSelector:(SEL)arg1 ;
+(char)isProtocolImplementationInferable:(id)arg1 checkFBGraphObjectAdoption:(char)arg2 ;
+(id)openGraphActionForPost;
+(id)openGraphObjectForPost;
+(char)isGraphObjectID:(id)arg1 sameAs:(id)arg2 ;
-(char)provisionedForPost;
-(void)setProvisionedForPost:(char)arg1 ;
-(void)setObjectDescription:(id)arg1 ;
-(id)graphObjectifyAtKey:(id)arg1 ;
-(void)graphObjectifyAll;
-(id)initWrappingDictionary:(id)arg1 ;
-(id)objectDescription;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(unsigned)count;
-(char)conformsToProtocol:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)keyEnumerator;
-(id)objectID;
-(void)setObjectID:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

