/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGExperimentSet;

@interface IGExperimentManager : NSObject {

	IGExperimentSet* _deviceExperimentSet;

}

@property (nonatomic,readonly) IGExperimentSet * deviceExperimentSet;              //@synthesize deviceExperimentSet=_deviceExperimentSet - In the implementation block
+(char)exposeValueForBoolExperiment:(id)arg1 ;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(char)exposeCachedValueForMainFeedExperiment;
+(id)cachedExperimentForKey:(id)arg1 ;
+(id)experimentsGroupsMapping;
+(void)refreshExperimentsIfNecessary;
+(char)wantsColdStart;
+(id)exposeValueFromExperiment:(id)arg1 parameterName:(id)arg2 respectingHoldout:(id)arg3 ;
+(void)disableExperiments;
+(id)sharedInstance;
-(IGExperimentSet *)deviceExperimentSet;
-(id)init;
@end
